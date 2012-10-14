define32:
  build_dir=win32
define64:
  build_dir=x64
  
script abuild:
	!vcbuild /rebuild gts.sln
	
into lib:
  from $(build_dir)\Release:
    gts.lib
    gts.pdb
  from $(build_dir)\Debug:
    gts_d.lib
    gts_d.pdb

into include:
	from src:
		gts.h
		gtsconfig.h
