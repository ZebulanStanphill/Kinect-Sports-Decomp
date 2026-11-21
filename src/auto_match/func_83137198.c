extern unsigned int DAT_8323f6d0;
extern unsigned int DAT_8323f6d4;
extern unsigned int DAT_8323f6d8;
extern unsigned int ___7UserChannelInfo_hkxMesh__6B_;
extern unsigned int _cleanupLoadedObjecthkxMeshUserChannelInfo__YAXPAX_Z;
extern unsigned int _finishLoadedObjecthkxMeshUserChannelInfo__YAXPAXH_Z;
extern unsigned int lbl_8323F6CC;

void fn_83137198(void)

{
  unsigned char auStack_1c [4];
  unsigned char auStack_18 [8];
  
  fn_82CED308(auStack_1c,0);
  fn_82CED308(auStack_18,0);
  lbl_8323F6CC = "hkxMeshUserChannelInfo";
  DAT_8323f6d0 = _finishLoadedObjecthkxMeshUserChannelInfo__YAXPAXH_Z;
  DAT_8323f6d4 = _cleanupLoadedObjecthkxMeshUserChannelInfo__YAXPAX_Z;
  DAT_8323f6d8 = &___7UserChannelInfo_hkxMesh__6B_;
  return;
}
