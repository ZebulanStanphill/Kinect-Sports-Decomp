struct Entry { char pad[16]; unsigned id; char tail[16]; }; struct S { char pad[0xf4]; Entry *b,*a,*c; };

extern "C" Entry *fn_82958D40(S *s, unsigned id) { Entry *r=0; unsigned i=0; Entry *a[3]; Entry **p=a; a[0]=s->a; a[1]=s->b; a[2]=s->c; do { if (*p) { {Entry *cursor=*p;while(cursor->id!=(unsigned)-1&&cursor->id!=id)++cursor;r=cursor;} if(r->id != (unsigned)-1) return r; } ++i; ++p; } while(i<3); return r; }
