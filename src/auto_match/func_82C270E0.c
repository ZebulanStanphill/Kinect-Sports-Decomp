typedef struct State_82C270E0 { char pad[0x50]; int state; char pad54[0x8c]; void *handle; int done, pause; } State_82C270E0;
typedef struct Context_82C270E0 { char pad[0x1c]; State_82C270E0 *s; } Context_82C270E0;
extern int fn_82C107F8(void *,int,int,int);
extern int fn_82C108A8(void *,int,int,int,int,int,int);
extern int fn_82C23380(Context_82C270E0 *);
extern int fn_82C24CC8(Context_82C270E0 *);
extern int fn_82C25F70(Context_82C270E0 *);
int fn_82C270E0(Context_82C270E0 *o) {
 State_82C270E0 *s=o->s; int hr=0;
 if (!s) hr=0x80070057;
 else if (!s->done) {
  for (;;) {
   switch((unsigned)s->state) {
    case 0: case 1: case 2: case 3:
     hr=fn_82C24CC8(o); if (hr<0) return hr; break;
    case 4:
     s->state=5; hr=fn_82C107F8(s->handle,1,0,0);
     if (hr<0) return hr;
     if (hr!=0x500006) goto success;
     s->state=14; break;
    case 14: case 15: case 16:
     hr=fn_82C23380(o); if(hr<0) return hr; break;
    case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13:
     hr=fn_82C25F70(o); if(hr<0) return hr;
     if(s->done || s->pause) {
      if(s->pause) s->pause=0;
      return hr;
     }
     break;
    case 17:
     s->state=5; hr=fn_82C108A8(s->handle,1,0x10010,0,0,0,4);
     if(hr<0) return hr;
    success: return 0;
    case 18: return 0x50000b;
   }
  }
 }
 return hr;
}
