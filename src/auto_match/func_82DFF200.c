typedef struct Al_82DFF200 Al_82DFF200;
typedef struct {
  void *f0;
  void *f4;
  void *f8;
  void *fc;
  void (*Free)(Al_82DFF200 *al, void *p, int size, int elemSize);
} AlVt_82DFF200;
struct Al_82DFF200 {
  AlVt_82DFF200 *vt;
};

typedef struct Mem_82DFF200 {
  char *stackCur;
  int pad4[3];
  Al_82DFF200 *al;
} Mem_82DFF200;

typedef struct LocalArray_82DFF200 {
  void *data;
  int size;
  int cap;
  void *localMemory;
} LocalArray_82DFF200;

typedef struct Handler_82DFF200 Handler_82DFF200;
typedef struct Item_82DFF200 Item_82DFF200;
typedef struct {
  void *f0;
  void *f4;
  void *f8;
  void *fc;
  void (*Process)(Handler_82DFF200 *h, float t, Item_82DFF200 *item, void *buffer);
} HandlerVt_82DFF200;
struct Handler_82DFF200 {
  HandlerVt_82DFF200 *vt;
};

typedef struct Desc_82DFF200 {
  char pad0[0x20];
  unsigned char count;
} Desc_82DFF200;

struct Item_82DFF200 {
  char pad0[0x1c];
  Desc_82DFF200 *desc;
  char pad20[0x1c];
  Handler_82DFF200 *handler;
};

typedef struct Owner_82DFF200 {
  int pad0[2];
  Item_82DFF200 **items;
  int count;
} Owner_82DFF200;

typedef struct Info_82DFF200 {
  int pad0[2];
  float time;
} Info_82DFF200;

extern Mem_82DFF200 *fn_82CE5410(void);
extern void fn_82CE6310(Al_82DFF200 *al, LocalArray_82DFF200 *array, int capacity, int elemSize);
extern void fn_82DFC8F8(Item_82DFF200 *item);
extern void fn_82DFE6F8(Item_82DFF200 *item, Info_82DFF200 *info, void *buffer);

static __forceinline void ReleaseMemory(LocalArray_82DFF200 *v, int elemSize)
{
  Al_82DFF200 *al = fn_82CE5410()->al;
  v->size = 0;
  if (((int)v->cap & (int)0x80000000) == 0) {
    al->vt->Free(al, v->data, v->cap & 0x3fffffff, elemSize);
  }
}

void fn_82DFF200(Owner_82DFF200 *self, Info_82DFF200 *info)
{
  LocalArray_82DFF200 buffer;
  int n;
  int i;

  buffer.data = 0;
  buffer.size = 0;
  buffer.cap = 0x80000000;
  {
    Mem_82DFF200 *mem = fn_82CE5410();
    char *p = mem->stackCur;
    mem->stackCur = p + 0x600;
    buffer.localMemory = p;
    buffer.data = p;
    buffer.cap = 0x80000010;
  }
  n = self->count;
  for (i = 0; i < n; i++) {
    Item_82DFF200 **items = self->items;
    Item_82DFF200 *item = items[i];
    int size = item->desc->count;
    Al_82DFF200 *al = fn_82CE5410()->al;
    if ((buffer.cap & 0x3fffffff) < size) {
      int cap = (buffer.cap & 0x3fffffff) * 2;
      fn_82CE6310(al, &buffer, size < cap ? cap : size, 0x60);
    }
    buffer.size = size;
    fn_82DFC8F8(item);
    item->handler->vt->Process(item->handler, info->time, item, buffer.data);
    fn_82DFE6F8(item, info, buffer.data);
  }
  if (buffer.localMemory == buffer.data)
    buffer.size = 0;
  {
    void *mem = buffer.localMemory;
    fn_82CE5410()->stackCur = mem;
  }
  ReleaseMemory(&buffer, 0x60);
}
