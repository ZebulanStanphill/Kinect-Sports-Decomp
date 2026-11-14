/* Name of an in-play commentary/event id (42 ids). */
const char *fn_8236FB68(int id)
{
  const char *name = 0;

  switch (id) {
  case 0:
    name = "inplay_blockchance_player";
    break;
  case 1:
    name = "inplay_caughtout";
    break;
  case 2:
    name = "inplay_covering_player";
    break;
  case 3:
    name = "inplay_crowd_cheer";
    break;
  case 4:
    name = "inplay_dive_player";
    break;
  case 5:
    name = "inplay_foul_timewasting";
    break;
  case 6:
    name = "inplay_home_loselead";
    break;
  case 7:
    name = "inplay_home_takelead";
    break;
  case 34:
    name = "inplay_matchpointserve";
    break;
  case 8:
    name = "inplay_matchpointwon";
    break;
  case 9:
    name = "prematch_match_start";
    break;
  case 10:
    name = "minigame_encouragement";
    break;
  case 11:
    name = "minigame_hitbyprop";
    break;
  case 12:
    name = "minigame_onelifeleft";
    break;
  case 13:
    name = "minigame_endofwave";
    break;
  case 14:
    name = "inplay_net_skim";
    break;
  case 15:
    name = "inplay_passbump";
    break;
  case 16:
    name = "inplay_passset";
    break;
  case 17:
    name = "inplay_pointwon_ace";
    break;
  case 18:
    name = "inplay_rally_pointwon_longrally";
    break;
  case 20:
    name = "postmatch_outro";
    break;
  case 19:
    name = "postmatch_review_even";
    break;
  case 21:
    name = "postmatch_review_onesided_playerwin";
    break;
  case 22:
    name = "postmatch_review_onesided_tie";
    break;
  case 23:
    name = "prematch_intro_daytime";
    break;
  case 24:
    name = "inplay_rally_extreme";
    break;
  case 25:
    name = "inplay_replay_player";
    break;
  case 26:
    name = "inplay_review_closescore";
    break;
  case 27:
    name = "inplay_review_winning";
    break;
  case 28:
    name = "inplay_saved";
    break;
  case 29:
    name = "inplay_score";
    break;
  case 30:
    name = "inplay_service";
    break;
  case 31:
    name = "inplay_service_good";
    break;
  case 32:
    name = "inplay_service_max";
    break;
  case 33:
    name = "inplay_servicechange";
    break;
  case 35:
    name = "inplay_spikechance_player";
    break;
  case 36:
    name = "inplay_tap";
    break;
  case 37:
    name = "inplay_teamwork";
    break;
  case 40:
    name = "inplay_trick";
    break;
  case 38:
    name = "inplay_tiebreak";
    break;
  case 39:
    name = "inplay_tiebreak_won";
    break;
  case 41:
    name = "inplay_winningscene";
    break;
  }
  return name;
}
