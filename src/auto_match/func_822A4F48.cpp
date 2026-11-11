// Pushes the display arguments of one player row (name, slot, colour, label, score, rank, mode) as
// Scaleform-style values onto an argument vector.
extern "C" char lbl_82196582[];

struct Value_822A4F48 {
  void *pObjectInterface;
  int Type;
  union {
    double NValue;
    const char *pString;
    const wchar_t *pStringW;
  };
  Value_822A4F48(double v) : pObjectInterface(0), Type(3) { NValue = v; }
  Value_822A4F48(const char *s) : pObjectInterface(0), Type(4) { pString = s; }
  Value_822A4F48(const wchar_t *s) : pObjectInterface(0), Type(5) { pStringW = s; }
  ~Value_822A4F48();
};

struct Args_822A4F48 {
  Value_822A4F48 *first;
  Value_822A4F48 *last;
  Value_822A4F48 *end;
};

extern "C" void fn_82273C88(Value_822A4F48 *v);
extern "C" void fn_82290458(Args_822A4F48 *v, const Value_822A4F48 *x);

inline Value_822A4F48::~Value_822A4F48() { fn_82273C88(this); }

static inline void PushBack(Args_822A4F48 *args, const Value_822A4F48 &v) { fn_82290458(args, &v); }

struct Names_822A4F48 {
  wchar_t (*names)[0x20];
};

struct Item_822A4F48 {
  char pad[0x24];
  unsigned int white;
};

struct Player_822A4F48 {
  void **items;
  char pad4[0xc];
  int current;
};

struct PlayerList_822A4F48 {
  Player_822A4F48 **players;
};

struct Game_822A4F48 {
  char pad[8];
  PlayerList_822A4F48 *list;
};

struct Row_822A4F48 {
  int index;
  wchar_t label[0x26];
  int wr;
  int pb;
  int fs;
};

extern "C" Item_822A4F48 *fn_822ABA88(void *item, int flags);
extern "C" int fn_8243E700(void *a, int index, void *b);

extern "C" void fn_822A4F48(Names_822A4F48 *names, Args_822A4F48 *args, Game_822A4F48 *game, Row_822A4F48 *row,
                            void *a, unsigned int score, void *b)
{
  int index = row->index;
  Player_822A4F48 *p = game->list->players[index];
  unsigned int white = fn_822ABA88(p->items[p->current], 0)->white;
  int slot = fn_8243E700(a, index, b);
  PushBack(args, Value_822A4F48(names->names[slot + 2]));
  PushBack(args, Value_822A4F48((double)slot));
  PushBack(args, Value_822A4F48(white ? L"white" : L"black"));
  PushBack(args, Value_822A4F48(row->label));
  PushBack(args, Value_822A4F48((double)score));
  PushBack(args, Value_822A4F48((double)(index + 1)));
  if (row->wr)
    PushBack(args, Value_822A4F48("wr"));
  else if (row->pb)
    PushBack(args, Value_822A4F48("pb"));
  else if (row->fs)
    PushBack(args, Value_822A4F48("fs"));
  else
    PushBack(args, Value_822A4F48(lbl_82196582));
}
