import sys
from simple_UDP import send_msg

their_ip	= sys.argv[1]
their_port	= int(sys.argv[2])
msg			= sys.argv[3]

send_msg(their_ip, their_port, msg)
