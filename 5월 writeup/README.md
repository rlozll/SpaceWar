## scroll master

처음에 스크롤을 내렸더니 조금 많이 내려야 1%가 채워졌다.
예전에 tab + enter 키를 엄청 눌러서 10000번을 채워야 하는 문제와 비슷한 것 같다.
그러면 일단 매크로와 관련된 파이썬 코드를 짜줘야 한다는 것이기 때문에
파이썬 페이지 스크롤이라고 구글링하고 이를 참고하여 파이썬 코드를 짜주도록 하겠다.

    from selenium import webdriver
    import time
    
    driver = webdriver.Chrome(r'C:\Users\경로는 개인정보...\chromedriver.exe')
    driver.get("https://backendcode.tistory.com/165")
    
    driver.execute_script("window.scrollBy(0,1000);")
    time.sleep(1)
    
    driver.execute_script("window.scrollBy(0,-1000);")

이렇게 코드를 작성해주었는데, 왜인지..... 안 되네요.
계속 수정해봐도 안 되니까.. 답답하다.
그냥 결국엔 하나하나 다 내렸다. 생각보다 얼마 안 걸렸다. ㅎㅎ...


![initial](https://github.com/rlozll/SpaceWar/assets/157143590/14929293-d869-425e-b068-988c7b086fb8)

![initial](https://github.com/rlozll/SpaceWar/assets/157143590/17df1a5a-a60b-4fcb-9740-967cb70030db)
