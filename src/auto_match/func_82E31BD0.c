typedef struct Object_82E31BD0 { int (**vtable)(); } Object_82E31BD0;
extern char lbl_8215465C[];
extern Object_82E31BD0 *fn_82E50BE8(int,int,int,int,int);
extern Object_82E31BD0 *fn_82E31128(Object_82E31BD0 *, int *);
extern int fn_82E31708(Object_82E31BD0 *,void *);
int fn_82E31BD0(void *context,void **out) {
  int hr = 0;
  Object_82E31BD0 *object,*mem;
  if (out == 0) return 0x80070057;
  *out=0;
  mem=fn_82E50BE8(0x1e8,0,0,0,0);
  if (mem != 0) object=fn_82E31128(mem,&hr);
  else object=0;
  if (object == 0) hr=0x8007000e;
  else if (hr<0 || (context && (hr=fn_82E31708(object,context))<0) ||
          (hr=object->vtable[0](object,lbl_8215465C,out))<0) {
    object->vtable[49](object,1);
  }
  return hr;
}
