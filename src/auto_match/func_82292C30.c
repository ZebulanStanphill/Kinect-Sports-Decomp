typedef struct Mgr_82292C30 { char pad[0x50]; int state; } Mgr_82292C30;
extern Mgr_82292C30 *fn_82292AE8(void);
extern void fn_82536070(const char *, const char *);
void fn_82292C30(int state)
{
  Mgr_82292C30 *m = fn_82292AE8();
  const char *s;
  if (m->state == state) return;
  if (m->state == 2 && (state == 3 || state == 4)) return;
  m->state = state;
  switch (state) {
  case 0: fn_82536070("music_frontend_location", "stadium"); break;
  case 1: fn_82536070("music_frontend_location", "party"); break;
  case 2: fn_82536070("music_frontend_location", "loading_party"); break;
  case 3: fn_82536070("music_frontend_location", "loading_stadium"); break;
  case 4: fn_82536070("music_frontend_location", "stadium_exterior"); break;
  case 5: fn_82536070("music_frontend_location", "results_main"); break;
  case 6: fn_82536070("music_frontend_location", "results_party"); break;
  case 7: fn_82536070("music_frontend_location", "photos_main"); break;
  case 8: fn_82536070("music_frontend_location", "photos_party"); break;
  case 9: fn_82536070("music_frontend_location", "party_result_red"); break;
  case 10: fn_82536070("music_frontend_location", "party_result_blue"); break;
  case 11: fn_82536070("music_frontend_location", "party_result_draw"); break;
  default: break;
  }
}
