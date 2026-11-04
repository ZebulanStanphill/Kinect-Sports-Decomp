typedef struct Ctx_82F20D28 { char pad[0x86c]; void (*cb)(char *, int, int, int); } Ctx_82F20D28;

void fn_82F20D28(Ctx_82F20D28 *ctx, char *p, unsigned char kind, int a, int b)
{
  switch (kind) {
  case 1:
    ctx->cb(p + 12, a, b, 4);
    break;
  case 2:
    ctx->cb(p + 8, a, b, 4);
    break;
  case 3:
    ctx->cb(p + 8, a, b, 8);
    break;
  case 4:
    ctx->cb(p + 4, a, b, 4);
    break;
  case 5:
    ctx->cb(p + 4, a, b, 4);
    ctx->cb(p + 12, a, b, 4);
    break;
  case 6:
    ctx->cb(p + 4, a, b, 8);
    break;
  case 7:
    ctx->cb(p + 4, a, b, 12);
    break;
  case 8:
    ctx->cb(p, a, b, 4);
    break;
  case 9:
    ctx->cb(p, a, b, 4);
    ctx->cb(p + 12, a, b, 4);
    break;
  case 10:
    ctx->cb(p, a, b, 4);
    ctx->cb(p + 8, a, b, 4);
    break;
  case 11:
    ctx->cb(p, a, b, 4);
    ctx->cb(p + 8, a, b, 8);
    break;
  case 12:
    ctx->cb(p, a, b, 8);
    break;
  case 13:
    ctx->cb(p, a, b, 8);
    ctx->cb(p + 12, a, b, 4);
    break;
  case 14:
    ctx->cb(p, a, b, 12);
    break;
  case 15:
    ctx->cb(p, a, b, 16);
    break;
  }
}
