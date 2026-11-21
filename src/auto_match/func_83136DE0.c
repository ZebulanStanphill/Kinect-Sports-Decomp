extern unsigned int DAT_8323f5d0;
extern unsigned int DAT_8323f5d4;
extern unsigned int DAT_8323f5d8;
extern unsigned int ___7hkxMaterial__6B_;
extern unsigned int _cleanupLoadedObjecthkxMaterial__YAXPAX_Z;
extern unsigned int _finishLoadedObjecthkxMaterial__YAXPAXH_Z;
extern unsigned int lbl_8323F5CC;

void fn_83136DE0(void)

{
  unsigned char auStack_7c [124];
  
  fn_82CED308(auStack_7c,0);
  lbl_8323F5CC = "hkxMaterial";
  DAT_8323f5d0 = _finishLoadedObjecthkxMaterial__YAXPAXH_Z;
  DAT_8323f5d4 = _cleanupLoadedObjecthkxMaterial__YAXPAX_Z;
  DAT_8323f5d8 = &___7hkxMaterial__6B_;
  return;
}
