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
extern char lbl_831BC604[];

typedef struct { unsigned short freq; unsigned short code; } ct_data_82F8CFE8;
typedef struct { ct_data_82F8CFE8 *dyn_tree; int max_code; void *stat_desc; } tree_desc_82F8CFE8;
typedef struct deflate_state_82F8CFE8 {
  char pad0[0x94];
  ct_data_82F8CFE8 dyn_ltree[573];
  ct_data_82F8CFE8 dyn_dtree[61];
  ct_data_82F8CFE8 bl_tree[39];
  tree_desc_82F8CFE8 l_desc;
  tree_desc_82F8CFE8 d_desc;
  tree_desc_82F8CFE8 bl_desc;
  char padb3c[0x16a0 - 0xb3c];
  int last_lit;
  int pad16a4;
  int opt_len;
  int static_len;
  int matches;
  int last_eob_len;
  unsigned short bi_buf;
  unsigned short pad16ba;
  int bi_valid;
} deflate_state_82F8CFE8;

void fn_82F8CFE8(deflate_state_82F8CFE8 *s)
{
  int n;
  s->l_desc.dyn_tree = s->dyn_ltree;
  s->l_desc.stat_desc = lbl_831BC604;
  s->d_desc.stat_desc = (lbl_831BC604 + 0x14);
  s->bl_desc.stat_desc = (lbl_831BC604 + 0x28);
  s->bi_buf = 0;
  s->d_desc.dyn_tree = s->dyn_dtree;
  s->bl_desc.dyn_tree = s->bl_tree;
  s->bi_valid = 0;
  s->last_eob_len = 8;
  for (n = 0; n < 286; n++) s->dyn_ltree[n].freq = 0;
  for (n = 0; n < 30; n++) s->dyn_dtree[n].freq = 0;
  for (n = 0; n < 19; n++) s->bl_tree[n].freq = 0;
  s->dyn_ltree[256].freq = 1;
  s->opt_len = s->static_len = 0;
  s->last_lit = s->matches = 0;
}
