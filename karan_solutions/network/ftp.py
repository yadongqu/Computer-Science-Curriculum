from ftplib import FTP
import sys, os, os.path, operator

def upload(handle, filename):
	f = open(filename, "rb")
	(base, ext) = os.path.splitext(filename)
	picext = ".bmp .jpg .jpeg .dib .tif .tiff .gif .png"
	if(operator.contains(picext, ext)):
		try:
			handle.storbinary("STOR " + filename, f, 1)
		except Exception:
			print "Succesful upload."
		else:
			print "Succesful upload."
		f.close()
		return

	try:
		handle.storbinary("STOR " + filename, f)
	except Exception:
		print "Successful upload."
	else:
		print "Successful upload."
	f.close()
	return

def download(hanlde, filename):
	f2 = open(filename, "wb")
	try:
		handle.retrbinary("RETR " + filename, f2.write)
	except Exception:
		print "Error in downloading the remote file."
		return
	else:
		print "Successful download!"
	return

host_name = raw_input("Enter website name to connect to, exclude ftp notation:  ")
if "http://" in host_name:
	host_name = host_name.replace("http://", "")
host_name = host_name.replace("\n", "")
user = raw_input("Enter username: ")
pwd = raw_input("Enter password: ")
try:
	ftph = FTP(host_name)
except:
	print "Host could not be resolved."
	raw_input()
	sys.exit()

else:
	pass
try:
	ftph.login(user, pwd)
except Exception:
	if user == "anonymous" or user == "Anonymous" and pwd == "anonymous" or pwd == "Anonymous":
		print "The server does not accept anonymous requests"
		raw_input()
		sys.exit()
	else:
		print "Invalid login combination"
		raw_input()
		sys.exit()
else:
	print "Successfully connected!\n"
print ftph.getWelcome()
flag = 1
count = 0
path = ftph.pwd()
charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"
print "Press help at any time to see proper usage.\n"
while flag:
	command = raw_input("FTP ]> ")
	if "get" in command:
		rf = command.replace("get ", "")
		rf = rf.replace("\n", "")
		download(ftph, rf)
		continue
	elif "put" in command:
		lf = command.replace()