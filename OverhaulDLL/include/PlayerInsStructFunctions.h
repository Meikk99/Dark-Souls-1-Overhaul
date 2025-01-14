#pragma once
#ifndef PLAYERINSSTRUCTFUNCTIONS_H
#define PLAYERINSSTRUCTFUNCTIONS_H

#include <stdint.h>
#include "PlayerInsStruct.h"

void copy_PlayerIns(PlayerIns* to, PlayerIns* from, bool to_game);
PlayerIns* init_PlayerIns();
void free_PlayerIns(PlayerIns* to);

void copy_ChrAsm(ChrAsm* to, ChrAsm* from);
ChrAsm* init_ChrAsm();
void free_ChrAsm(ChrAsm* to);

void copy_ChrAsmModelRes(ChrAsmModelRes* to, ChrAsmModelRes* from, bool to_game);
ChrAsmModelRes* init_ChrAsmModelRes();
void free_ChrAsmModelRes(ChrAsmModelRes* to);

void copy_ChrAsmModelRes_Elem(ChrAsmModelRes_Elem* to, ChrAsmModelRes_Elem* from, bool to_game);
ChrAsmModelRes_Elem* init_ChrAsmModelRes_Elem();
void free_ChrAsmModelRes_Elem(ChrAsmModelRes_Elem* to, bool freeself);

void copy_ChrAsmModel(ChrAsmModel* to, ChrAsmModel* from, bool to_game);
ChrAsmModel* init_ChrAsmModel();
void free_ChrAsmModel(ChrAsmModel* to);

void copy_ProEquipCtrl(ProEquipCtrl* to, ProEquipCtrl* from, bool to_game);
ProEquipCtrl* init_ProEquipCtrl();
void free_ProEquipCtrl(ProEquipCtrl* to);

void copy_WeaponEquipCtrl(WeaponEquipCtrl* to, WeaponEquipCtrl* from, bool to_game);
WeaponEquipCtrl* init_WeaponEquipCtrl();
void free_WeaponEquipCtrl(WeaponEquipCtrl* to);

void copy_RingEquipCtrl(RingEquipCtrl* to, RingEquipCtrl* from, bool to_game);
RingEquipCtrl* init_RingEquipCtrl();
void free_RingEquipCtrl(RingEquipCtrl* to);

void copy_PlayerGameData(PlayerGameData* to, PlayerGameData* from);
PlayerGameData* init_PlayerGameData();
void free_PlayerGameData(PlayerGameData* to);

void copy_PlayerGameData_ChrProperties(PlayerGameData_ChrProperties* to, PlayerGameData_ChrProperties* from);

void copy_EquipGameData(EquipGameData* to, EquipGameData* from);
EquipGameData* init_EquipGameData();
void free_EquipGameData(EquipGameData* to, bool freeself);

void copy_EquipItemData(EquipItemData* to, EquipItemData* from);

void copy_EquipMagicData(EquipMagicData* to, EquipMagicData* from);
EquipMagicData* init_EquipMagicData();
void free_EquipMagicData(EquipMagicData* to);

void copy_PlayerGameData_AttributeInfo(PlayerGameData_AttributeInfo* to, PlayerGameData_AttributeInfo* from);

void copy_ChrIns(ChrIns* to, ChrIns* from, bool to_game);
ChrIns* init_ChrIns();
void free_ChrIns(ChrIns* to, bool freeself);

void copy_ChrIns_field0x18(ChrIns_field0x18* to, ChrIns_field0x18* from);
ChrIns_field0x18* init_ChrIns_field0x18();
void free_ChrIns_field0x18(ChrIns_field0x18* to);

void copy_ChrIns_field0x2c8(ChrIns_field0x2c8* to, ChrIns_field0x2c8* from);
ChrIns_field0x2c8* init_ChrIns_field0x2c8();
void free_ChrIns_field0x2c8(ChrIns_field0x2c8* to);

void copy_EntityThrowAnimationStatus(EntityThrowAnimationStatus* to, EntityThrowAnimationStatus* from);
EntityThrowAnimationStatus* init_EntityThrowAnimationStatus();
void free_EntityThrowAnimationStatus(EntityThrowAnimationStatus* to);

void copy_QwcSpEffectEquipCtrl(QwcSpEffectEquipCtrl* to, QwcSpEffectEquipCtrl* from);
QwcSpEffectEquipCtrl* init_QwcSpEffectEquipCtrl();
void free_QwcSpEffectEquipCtrl(QwcSpEffectEquipCtrl* to);

void copy_SpecialEffect(SpecialEffect* to, SpecialEffect* from, bool to_game);
SpecialEffect* init_SpecialEffect();
void free_SpecialEffect(SpecialEffect* to);

void copy_SpecialEffect_Info(SpecialEffect_Info* to, SpecialEffect_Info* from, bool to_game);
SpecialEffect_Info* init_SpecialEffect_Info();
void free_SpecialEffect_Info(SpecialEffect_Info* to);

void copy_PlayerCtrl(PlayerCtrl* to, PlayerCtrl* from, bool to_game);
PlayerCtrl* init_PlayerCtrl();
void free_PlayerCtrl(PlayerCtrl* to);

void copy_ArrowTurnAnim(ArrowTurnAnim* to, ArrowTurnAnim* from);
ArrowTurnAnim* init_ArrowTurnAnim();
void free_ArrowTurnAnim(ArrowTurnAnim* to);

void copy_SpinJoint(SpinJoint* to, SpinJoint* from);
SpinJoint* init_SpinJoint();
void free_SpinJoint(SpinJoint* to);

void copy_TurnAnim(TurnAnim* to, TurnAnim* from);
TurnAnim* init_TurnAnim();
void free_TurnAnim(TurnAnim* to, bool freeself);

void copy_ChrCtrl(ChrCtrl* to, ChrCtrl* from, bool to_game);
ChrCtrl* init_ChrCtrl();
void free_ChrCtrl(ChrCtrl* to, bool freeself);

void copy_WalkAnim_Twist(WalkAnim_Twist* to, WalkAnim_Twist* from, bool to_game);
WalkAnim_Twist* init_WalkAnim_Twist();
void free_WalkAnim_Twist(WalkAnim_Twist* to);

void copy_WalkAnim_Twist_Field0x228Elem(WalkAnim_Twist_Field0x228Elem* to, WalkAnim_Twist_Field0x228Elem* from, bool to_game);
WalkAnim_Twist_Field0x228Elem* init_WalkAnim_Twist_Field0x228Elem();
void free_WalkAnim_Twist_Field0x228Elem(WalkAnim_Twist_Field0x228Elem* to, bool freeself);

void copy_WalkAnim_Twist_Field0x228Elem_field0x10elem(WalkAnim_Twist_Field0x228Elem_field0x10elem* to, WalkAnim_Twist_Field0x228Elem_field0x10elem* from);

void copy_ActionCtrl(ActionCtrl* to, ActionCtrl* from, bool to_game);
ActionCtrl* init_ActionCtrl();
void free_ActionCtrl(ActionCtrl* to);

void copy_ActionCtrl_0x30Substruct(ActionCtrl_0x30Substruct* to, ActionCtrl_0x30Substruct* from, bool to_game);

void copy_EzState_detail_EzStateMachineImpl(EzState_detail_EzStateMachineImpl* to, EzState_detail_EzStateMachineImpl* from, bool to_game);
EzState_detail_EzStateMachineImpl* init_EzState_detail_EzStateMachineImpl();
void free_EzState_detail_EzStateMachineImpl(EzState_detail_EzStateMachineImpl* to);

void copy_EzStateRegisterSet(EzStateRegisterSet* to, EzStateRegisterSet* from, bool to_game);
EzStateRegisterSet* init_EzStateRegisterSet();
void free_EzStateRegisterSet(EzStateRegisterSet* to, bool freeself);

void copy_HavokChara(HavokChara* to, HavokChara* from, bool to_game);
HavokChara* init_HavokChara();
void free_HavokChara(HavokChara* to);

void copy_HitIns(HitIns* to, HitIns* from);
HitIns* init_HitIns();
void free_HitIns(HitIns* to);

void copy_hkpCharacterProxy(hkpCharacterProxy* to, hkpCharacterProxy* from);
hkpCharacterProxy* init_hkpCharacterProxy();
void free_hkpCharacterProxy(hkpCharacterProxy* to);

void copy_hkpSimpleShapePhantom(hkpSimpleShapePhantom* to, hkpSimpleShapePhantom* from);
hkpSimpleShapePhantom* init_hkpSimpleShapePhantom();
void free_hkpSimpleShapePhantom(hkpSimpleShapePhantom* to);

void copy_hkpSimpleShapePhantom_field0x30(hkpSimpleShapePhantom_field0x30* to, hkpSimpleShapePhantom_field0x30* from);
hkpSimpleShapePhantom_field0x30* init_hkpSimpleShapePhantom_field0x30();
void free_hkpSimpleShapePhantom_field0x30(hkpSimpleShapePhantom_field0x30* to);

void copy_AnimationMediator(AnimationMediator* to, AnimationMediator* from);
AnimationMediator* init_AnimationMediator();
void free_AnimationMediator(AnimationMediator* to);

void copy_AnimationMediatorStateEntry(AnimationMediatorStateEntry* to, AnimationMediatorStateEntry* from);
AnimationMediatorStateEntry* init_AnimationMediatorStateEntry();
void free_AnimationMediatorStateEntry(AnimationMediatorStateEntry* to, bool freeself);

void copy_ChrCtrl_AnimationQueue(ChrCtrl_AnimationQueue* to, ChrCtrl_AnimationQueue* from, bool to_game);
ChrCtrl_AnimationQueue* init_ChrCtrl_AnimationQueue();
void free_ChrCtrl_AnimationQueue(ChrCtrl_AnimationQueue* to);

void copy_ChrCtrl_AnimationQueue_field0x20(ChrCtrl_AnimationQueue_field0x20* to, ChrCtrl_AnimationQueue_field0x20* from, bool to_game);
ChrCtrl_AnimationQueue_field0x20* init_ChrCtrl_AnimationQueue_field0x20();
void free_ChrCtrl_AnimationQueue_field0x20(ChrCtrl_AnimationQueue_field0x20* to);

void copy_hkaAnimatedSkeleton(hkaAnimatedSkeleton* to, hkaAnimatedSkeleton* from);
hkaAnimatedSkeleton* init_hkaAnimatedSkeleton();
void free_hkaAnimatedSkeleton(hkaAnimatedSkeleton* to);

void copy_hkaDefaultAnimationControl(hkaDefaultAnimationControl* to, hkaDefaultAnimationControl* from);
hkaDefaultAnimationControl* init_hkaDefaultAnimationControl();
void free_hkaDefaultAnimationControl(hkaDefaultAnimationControl* to);

void copy_hkaAnimationControl(hkaAnimationControl* to, hkaAnimationControl* from);
hkaAnimationControl* init_hkaAnimationControl();
void free_hkaAnimationControl(hkaAnimationControl* to, bool freeself);

void copy_ChrCtrl_AnimationQueue_field0x10(ChrCtrl_AnimationQueue_field0x10* to, ChrCtrl_AnimationQueue_field0x10* from);
ChrCtrl_AnimationQueue_field0x10* init_ChrCtrl_AnimationQueue_field0x10();
void free_ChrCtrl_AnimationQueue_field0x10(ChrCtrl_AnimationQueue_field0x10* to);

void copy_ChrCtrl_AnimationQueueEntry(ChrCtrl_AnimationQueueEntry* to, ChrCtrl_AnimationQueueEntry* from, bool to_game);
ChrCtrl_AnimationQueueEntry* init_ChrCtrl_AnimationQueueEntry();
void free_ChrCtrl_AnimationQueueEntry(ChrCtrl_AnimationQueueEntry* to, bool freeself);

void copy_AnimationQueue(AnimationQueue* to, AnimationQueue* from);
AnimationQueue* init_AnimationQueue();
void free_AnimationQueue(AnimationQueue* to);

void copy_AnimationQueue_Entry(AnimationQueue_Entry* to, AnimationQueue_Entry* from);
AnimationQueue_Entry* init_AnimationQueue_Entry();
void free_AnimationQueue_Entry(AnimationQueue_Entry* to);

void copy_AnimationQueue_Entry_sub1(AnimationQueue_Entry_sub1* to, AnimationQueue_Entry_sub1* from);
AnimationQueue_Entry_sub1* init_AnimationQueue_Entry_sub1();
void free_AnimationQueue_Entry_sub1(AnimationQueue_Entry_sub1* to, bool freeself);

void copy_AnimationQueue_Entry_sub1_field0x10(AnimationQueue_Entry_sub1_field0x10* to, AnimationQueue_Entry_sub1_field0x10* from);

#endif
