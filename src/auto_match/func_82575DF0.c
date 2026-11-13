extern unsigned char fn_82575E90(unsigned, unsigned);
unsigned char fn_82575DF0(unsigned base, unsigned obj)
{ unsigned u; unsigned t; unsigned char r;
  if (obj == 0) return 1;
    t = *(unsigned *)(obj + 0x1bc); 
    if (t != 0) u = t; else u = base;
    r = fn_82575E90(obj, u + 0x78) != 0 || fn_82575E90(obj, u + 0x70) != 0 || fn_82575E90(obj, u + 0x68) != 0;
  return r; }
