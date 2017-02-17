import sys
from simple_UDP import recv_msg

port = int(sys.argv[1])

msg = recv_msg(port)
print(msg)
