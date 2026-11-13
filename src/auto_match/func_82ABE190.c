typedef unsigned char bool;

typedef struct B_82ABE190 { int pad[2]; unsigned pad0:18; unsigned type:7; unsigned pad1:1; unsigned flag:1; unsigned rest:5; } B_82ABE190;
typedef struct A_82ABE190 { unsigned pad0:4; unsigned f:3; unsigned rest:25; int a; int b; B_82ABE190 *c; } A_82ABE190;

bool fn_82ABE190(A_82ABE190 *a)
{
  B_82ABE190 *b;
  bool s;
  return a->f != 0 && (b = a->c, s = b->type == 0x7d || b->type == 0x7c, !s) && (unsigned char)a->c->flag == 0;
}
