extern unsigned int DAT_8323f500;
extern unsigned int DAT_8323f504;
extern unsigned int DAT_8323f508;
extern unsigned int _cleanupLoadedObjecthkxEnvironment__YAXPAX_Z;
extern unsigned int fn_82E028F0;
extern unsigned int lbl_8323F4FC;

void fn_83136B38(void)

{
  unsigned int auStack_30 [12];
  
  fn_82E04F90(auStack_30,0);
  lbl_8323F4FC = "hkxEnvironment";
  DAT_8323f500 = fn_82E028F0;
  DAT_8323f504 = _cleanupLoadedObjecthkxEnvironment__YAXPAX_Z;
  DAT_8323f508 = auStack_30[0];
  return;
}
