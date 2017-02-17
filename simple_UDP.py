import socket

def send_msg(ip, port, msg):
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	encoded_msg = msg.encode()

	sock.sendto(encoded_msg, (ip, port))
	sock.close()

def recv_msg(port):
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	ip = socket.gethostbyname(socket.gethostname())

	sock.bind((ip, port))

	encoded_msg, addr = sock.recvfrom(4096) # 4096 is a magic number
	msg = encoded_msg.decode()
	sock.close()
	return msg
