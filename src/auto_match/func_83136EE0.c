extern unsigned int DAT_8323f610;
extern unsigned int DAT_8323f614;
extern unsigned int DAT_8323f618;
extern unsigned int ___7hkxMaterialEffect__6B_;
extern unsigned int _cleanupLoadedObjecthkxMaterialEffect__YAXPAX_Z;
extern unsigned int _finishLoadedObjecthkxMaterialEffect__YAXPAXH_Z;
extern unsigned int lbl_8323F60C;

void fn_83136EE0(void)

{
  unsigned char auStack_28 [40];
  
  fn_82CED308(auStack_28,0);
  lbl_8323F60C = "hkxMaterialEffect";
  DAT_8323f610 = _finishLoadedObjecthkxMaterialEffect__YAXPAXH_Z;
  DAT_8323f614 = _cleanupLoadedObjecthkxMaterialEffect__YAXPAX_Z;
  DAT_8323f618 = &___7hkxMaterialEffect__6B_;
  return;
}
