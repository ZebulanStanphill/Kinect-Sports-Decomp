struct Reader_82E6F680 { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual int Read(unsigned __int64 *); };
extern "C" int fn_82E6F680(char *p,unsigned *out) {
 if (!out) return 0x80004003;
 *out=0;
 if (!*(Reader_82E6F680 **)(p+0x58)) return 0xc00d36bb;
 unsigned __int64 v=0;
 int hr=(*(Reader_82E6F680 **)(p+0x58))->Read(&v);
 if (hr<0) return hr;
 if (v/10000>0xffffffffu) return 0xc00d36bb;
 *out=(unsigned)(v/10000);return 0;
}
