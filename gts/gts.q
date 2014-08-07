define32:
  build_dir=win32
define64:
  build_dir=x64
  
into lib:
  from $(build_dir)\Release:
    gts.lib
    gts.pdb

into include:
  from src:
    gts.h
    gtsconfig.h
