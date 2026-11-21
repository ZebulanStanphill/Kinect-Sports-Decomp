extern unsigned int DAT_8323f830;
extern unsigned int DAT_8323f834;
extern unsigned int DAT_8323f838;
extern unsigned int ___7hkxScene__6B_;
extern unsigned int _cleanupLoadedObjecthkxScene__YAXPAX_Z;
extern unsigned int _finishLoadedObjecthkxScene__YAXPAXH_Z;
extern unsigned int lbl_8323F82C;

void fn_83137648(void)

{
  unsigned char auStack_b8 [4];
  unsigned char auStack_b4 [164];
  
  fn_82CED308(auStack_b8,0);
  fn_82CED308(auStack_b4,0);
  lbl_8323F82C = "hkxScene";
  DAT_8323f830 = _finishLoadedObjecthkxScene__YAXPAXH_Z;
  DAT_8323f834 = _cleanupLoadedObjecthkxScene__YAXPAX_Z;
  DAT_8323f838 = &___7hkxScene__6B_;
  return;
}
