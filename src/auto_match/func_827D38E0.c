typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern void *memcpy(void *, const void *, unsigned int);

typedef struct { unsigned char op; unsigned char bits; unsigned short val; } code_827D38E0;
typedef void *(*alloc_827D38E0)(void *opaque, unsigned int items, unsigned int size);
typedef void (*free_827D38E0)(void *opaque, void *address);
typedef struct state_827D38E0 {
  char pad0[0x24];
  unsigned int wbits;
  char pad1[0x34 - 0x28];
  unsigned char *window;
  char pad2[0x4c - 0x38];
  code_827D38E0 *lencode;
  code_827D38E0 *distcode;
  char pad3[0x6c - 0x54];
  code_827D38E0 *next;
  char pad4[0x530 - 0x70];
  code_827D38E0 codes[2048];
} state_827D38E0;
typedef struct {
  char pad0[0x1c];
  state_827D38E0 *state;
  alloc_827D38E0 zalloc;
  free_827D38E0 zfree;
  void *opaque;
  char pad1[0x38 - 0x2c];
} zs_827D38E0;

int fn_827D38E0(zs_827D38E0 *dest, zs_827D38E0 *source)
{
  state_827D38E0 *state;
  state_827D38E0 *copy;
  unsigned char *window;

  if (dest == 0 || source == 0 || source->state == 0 || source->zalloc == 0 || source->zfree == 0) {
    return -2;
  }
  state = source->state;
  copy = (state_827D38E0 *)source->zalloc(source->opaque, 1, sizeof(state_827D38E0));
  if (copy == 0) return -4;
  window = 0;
  if (state->window != 0) {
    window = (unsigned char *)source->zalloc(source->opaque, 1U << state->wbits, 1);
    if (window == 0) {
      source->zfree(source->opaque, copy);
      return -4;
    }
  }
  memcpy(dest, source, sizeof(zs_827D38E0));
  memcpy(copy, state, sizeof(state_827D38E0));
  if (state->lencode >= state->codes && state->lencode <= state->codes + 2047) {
    copy->lencode = copy->codes + (state->lencode - state->codes);
    copy->distcode = copy->codes + (state->distcode - state->codes);
  }
  copy->next = copy->codes + (state->next - state->codes);
  if (window != 0) {
    memcpy(window, state->window, 1U << state->wbits);
  }
  copy->window = window;
  dest->state = copy;
  return 0;
}

