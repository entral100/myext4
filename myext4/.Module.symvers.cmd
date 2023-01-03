cmd_/usr/src/myext4/Module.symvers := sed 's/\.ko$$/\.o/' /usr/src/myext4/modules.order | scripts/mod/modpost -m -a  -o /usr/src/myext4/Module.symvers -e -i Module.symvers   -T -
