import threading
import requests

class Download:
    def download(self, url, callback_world_count):
        print(f'线程:{threading.get_ident()}开始下载:{url}')
        response = requests.get(url)
        response.encoding = 'utf-8'
        callback_world_count(url, response.text)#调用回调函数

    def start_download(self, url, callback_world_count):
      
        thread = threading.Thread(target=self.download, args=(url, callback_world_count))
        thread.start()

def world_count(url,result):
    print(f"{url}:{len(result)}->{result[:5]}")
    # 普通函数，用于回调
def main():
    download = Download()
    download.start_download('http://127.0.0.1:8000/novel1.txt',world_count)
    download.start_download('http://127.0.0.1:8000/novel2.txt',world_count)
    download.start_download('http://127.0.0.1:8000/novel3.txt ',world_count)
# if __name__ == '__main__':
#     main()
