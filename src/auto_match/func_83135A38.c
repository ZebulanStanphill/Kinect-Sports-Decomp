extern unsigned int DAT_8323ee50;
extern unsigned int DAT_8323ee54;
extern unsigned int DAT_8323ee58;
extern unsigned int ___7hkpVehicleInstance__6B_;
extern unsigned int _cleanupLoadedObjecthkpVehicleInstance__YAXPAX_Z;
extern unsigned int _finishLoadedObjecthkpVehicleInstance__YAXPAXH_Z;
extern unsigned int lbl_8323EE4C;

void fn_83135A38(void)

{
  unsigned char auStack_dc [220];
  
  fn_82CED308(auStack_dc,0);
  lbl_8323EE4C = "hkpVehicleInstance";
  DAT_8323ee58 = &___7hkpVehicleInstance__6B_;
  DAT_8323ee50 = _finishLoadedObjecthkpVehicleInstance__YAXPAXH_Z;
  DAT_8323ee54 = _cleanupLoadedObjecthkpVehicleInstance__YAXPAX_Z;
  return;
}
