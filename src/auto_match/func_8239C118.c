extern void fn_82508078(int, const char *, int);

void fn_8239C118(int param_1, unsigned param_2)
{
  const char *name;

  switch (param_2) {
  case 0:
    name = "afterpoint_decided";
    break;
  case 1:
    name = "afterpoint_won_ace";
    break;
  case 2:
    name = "afterpoint_won_backhand";
    break;
  case 3:
    name = "afterpoint_won_backspin";
    break;
  case 4:
    name = "afterpoint_won_forehand";
    break;
  case 5:
    name = "afterpoint_won_powerful";
    break;
  case 6:
    name = "afterpoint_won_rally_long";
    break;
  case 7:
    name = "afterpoint_won_rally_normal";
    break;
  case 8:
    name = "afterpoint_won_spin";
    break;
  case 9:
    name = "afterpoint_won_topspin";
    break;
  case 10:
    name = "crowd_cheer";
    break;
  case 11:
    name = "crowd_disappointment";
    break;
  case 12:
    name = "crowd_swell";
    break;
  case 13:
    name = "inplay_deuce";
    break;
  case 14:
    name = "inplay_even_match";
    break;
  case 15:
    name = "inplay_foul_miss_table";
    break;
  case 16:
    name = "inplay_foul_volley";
    break;
  case 17:
    name = "inplay_foul_hit_net_and_own_side";
    break;
  case 18:
    name = "inplay_hit_net";
    break;
  case 19:
    name = "inplay_hit_table_side";
    break;
  case 20:
    name = "inplay_large_score_difference";
    break;
  case 21:
    name = "inplay_matchpoint";
    break;
  case 22:
    name = "inplay_poor_return";
    break;
  case 23:
    name = "inplay_rally_fast";
    break;
  case 24:
    name = "inplay_rally_slow";
    break;
  case 25:
    name = "inplay_service_change";
    break;
  case 26:
    name = "inplay_shot_backhand";
    break;
  case 27:
    name = "inplay_shot_backspin";
    break;
  case 28:
    name = "inplay_shot_forehand";
    break;
  case 29:
    name = "inplay_shot_powerful";
    break;
  case 30:
    name = "inplay_shot_spin";
    break;
  case 31:
    name = "inplay_shot_topspin";
    break;
  case 32:
    name = "inplay_smash_chance";
    break;
  case 33:
    name = "inplay_successive_side_hits";
    break;
  case 34:
    name = "inplay_tense_point";
    break;
  case 35:
    name = "minigame_rally_encouragement";
    break;
  case 36:
    name = "minigame_rally_pickup";
    break;
  case 37:
    name = "minigame_rally_praise";
    break;
  case 38:
    name = "minigame_twinbat_encouragement";
    break;
  case 39:
    name = "minigame_twinbat_pickup";
    break;
  case 40:
    name = "minigame_twinbat_praise";
    break;
  case 41:
    name = "postmatch_match_close";
    break;
  case 42:
    name = "postmatch_match_end";
    break;
  case 43:
    name = "postmatch_match_long";
    break;
  case 44:
    name = "postmatch_match_onesided";
    break;
  case 45:
    name = "postmatch_match_short";
    break;
  case 46:
    name = "prematch_before_match";
    break;
  case 47:
    name = "prematch_start_match";
    break;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    if (param_2 < 0x23)
      return;
    if (param_2 > 0x28)
      return;
  }
  fn_82508078(*(int *)(param_1 + 0xa4), name, 0);
}
