

from threading import Thread

i = 0

def thread_1():
  print("Hello from a thread!")
  global i
  
  
def main():
  someThread = Thread(tarket = someThreadFunction, args = (),)
  someThread.start()
  
  someThread.join
  print("Hello from main!")
  
main()
