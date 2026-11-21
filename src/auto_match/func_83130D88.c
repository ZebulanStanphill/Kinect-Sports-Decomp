extern unsigned int DAT_8323d204;
extern unsigned int DAT_8323d208;
extern unsigned int DAT_8323d20c;
extern unsigned int ___7hkpPhysicsSystem__6B_;
extern unsigned int _cleanupLoadedObjecthkpPhysicsSystem__YAXPAX_Z;
extern unsigned int _finishLoadedObjecthkpPhysicsSystem__YAXPAXH_Z;
extern unsigned int lbl_8323D200;

void fn_83130D88(void)

{
  unsigned char auStack_28 [40];
  
  fn_82CED308(auStack_28,0);
  lbl_8323D200 = "hkpPhysicsSystem";
  DAT_8323d204 = _finishLoadedObjecthkpPhysicsSystem__YAXPAXH_Z;
  DAT_8323d208 = _cleanupLoadedObjecthkpPhysicsSystem__YAXPAX_Z;
  DAT_8323d20c = &___7hkpPhysicsSystem__6B_;
  return;
}
