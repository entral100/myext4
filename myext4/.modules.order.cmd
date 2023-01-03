cmd_/usr/src/myext4/modules.order := {   echo /usr/src/myext4/ext4exit.ko; :; } | awk '!x[$$0]++' - > /usr/src/myext4/modules.order
