import time #導入time 函數
import sys  #導入 sys 函數

soundFile = 'test1.wav' #找尋音檔位置
a=int(input("輸入幾時:"))          #輸入幾時
b=int(input("輸入幾分:"))          #輸入幾分

not_executed = 1

def soundStart():
    if sys.platform[:7] == 'windows':
        import os
        os.popen2('音樂'  == soundFile)

    else:
        import winsound
        winsound.PlaySound(soundFile, winsound.SND_FILENAME)

while not_executed:
    dt = list(time.localtime())
    hour = dt[3]
    minute = dt[4]

    if hour == a and minute == b : # 下午a點b分的時候開始提示
        soundStart()

        not_executed = 0
