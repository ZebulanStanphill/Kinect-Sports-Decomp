extern unsigned int DAT_8323f970;
extern unsigned int DAT_8323f974;
extern unsigned int DAT_8323f978;
extern unsigned int ___7hkxTextureInplace__6B_;
extern unsigned int _cleanupLoadedObjecthkxTextureInplace__YAXPAX_Z;
extern unsigned int _finishLoadedObjecthkxTextureInplace__YAXPAXH_Z;
extern unsigned int lbl_8323F96C;

void fn_83137A50(void)

{
  unsigned char auStack_18 [4];
  unsigned char auStack_14 [4];
  
  fn_82CED308(auStack_18,0);
  fn_82CED308(auStack_14,0);
  lbl_8323F96C = "hkxTextureInplace";
  DAT_8323f970 = _finishLoadedObjecthkxTextureInplace__YAXPAXH_Z;
  DAT_8323f974 = _cleanupLoadedObjecthkxTextureInplace__YAXPAX_Z;
  DAT_8323f978 = &___7hkxTextureInplace__6B_;
  return;
}
