extern "C" void *fn_82CEAC20();
extern "C" int fn_82CFBBF0(void *, const char *);
extern "C" bool fn_82E09DA8() {
 void *r=fn_82CEAC20();
 return fn_82CFBBF0(r,"hkClass") && fn_82CFBBF0(r,"hkClassMember") && fn_82CFBBF0(r,"hkClassEnum") && fn_82CFBBF0(r,"hkClassEnumItem");
}
