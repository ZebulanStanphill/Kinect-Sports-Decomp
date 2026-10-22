typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef struct Fields { unsigned char bytes[76]; } Fields;
typedef struct Info { U32 header; Fields fields; } Info;
typedef struct Obj { char pad[100]; Info *data; } Obj;
extern void *memcpy(void *, const void *, unsigned int);
extern void *fn_82FA5060(void *, unsigned int);
extern Info *fn_83027128(void *);
extern void *lbl_831BC768;
void fn_83001C28(Obj *o,U64 unused,Info **out,unsigned char flag) {
 if (o->data) {
  if (!*out) {
   void *mem=fn_82FA5060(lbl_831BC768,80);
   Info *r=mem ? fn_83027128(mem) : 0;
   *out=r;
   if (!r) return;
  }
  if (!flag) { (*out)->fields=o->data->fields; }
 }
}
