int fn_82F81328(unsigned int param_1)

{
  param_1 = param_1 & 0xffff;
  if (param_1 >= 0x30) {
    if (param_1 < 0x3a) {
      return param_1 - 0x30;
    }
    if (param_1 < 0xff10) {
      if (param_1 >= 0x660) {
        if (param_1 < 0x66a) {
          return param_1 - 0x660;
        }
        if (param_1 >= 0x6f0) {
          if (param_1 < 0x6fa) {
            return param_1 - 0x6f0;
          }
          if (param_1 >= 0x966) {
            if (param_1 < 0x970) {
              return param_1 - 0x966;
            }
            if (param_1 >= 0x9e6) {
              if (param_1 < 0x9f0) {
                return param_1 - 0x9e6;
              }
              if (param_1 >= 0xa66) {
                if (param_1 < 0xa70) {
                  return param_1 - 0xa66;
                }
                if (param_1 >= 0xae6) {
                  if (param_1 < 0xaf0) {
                    return param_1 - 0xae6;
                  }
                  if (param_1 >= 0xb66) {
                    if (param_1 < 0xb70) {
                      return param_1 - 0xb66;
                    }
                    if (param_1 >= 0xc66) {
                      if (param_1 < 0xc70) {
                        return param_1 - 0xc66;
                      }
                      if (param_1 >= 0xce6) {
                        if (param_1 < 0xcf0) {
                          return param_1 - 0xce6;
                        }
                        if (param_1 >= 0xd66) {
                          if (param_1 < 0xd70) {
                            return param_1 - 0xd66;
                          }
                          if (param_1 >= 0xe50) {
                            if (param_1 < 0xe5a) {
                              return param_1 - 0xe50;
                            }
                            if (param_1 >= 0xed0) {
                              if (param_1 < 0xeda) {
                                return param_1 - 0xed0;
                              }
                              if (param_1 >= 0xf20) {
                                if (param_1 < 0xf2a) {
                                  return param_1 - 0xf20;
                                }
                                if (param_1 >= 0x1040) {
                                  if (param_1 < 0x104a) {
                                    return param_1 - 0x1040;
                                  }
                                  if (param_1 >= 0x17e0) {
                                    if (param_1 < 0x17ea) {
                                      return param_1 - 0x17e0;
                                    }
                                    if ((param_1 >= 0x1810) && (param_1 < 0x181a)) {
                                      return param_1 - 0x1810;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (param_1 < 0xff1a) {
      return param_1 - 0xff10;
    }
  }
  return -1;
}

