port: 7890
socks-port: 7891
redir-port: 7892
tproxy-port: 7895
mixed-port: 7893
allow-lan: true
mode: rule
log-level: info
ipv6: false
external-controller: 0.0.0.0:9090
dns:
  enable: true
  ipv6: false
  enhanced-mode: fake-ip
  listen: 0.0.0.0:7874
  default-nameserver:
    - 114.114.114.114
    - 119.29.29.29
    - 9.9.9.9
    - 8.8.8.8
    - 8.8.4.4
    - 1.1.1.1
    - 1.0.0.1
  nameserver:
    - 114.114.114.114
    - 119.29.29.29
    - 9.9.9.9
    - 8.8.8.8
    - 8.8.4.4
    - 1.1.1.1
    - 1.0.0.1
    - https://dns.adguard.com/dns-query
    - https://dns.google/dns-query
    - tls://dns.adguard.com
    - tls://dns.google
  fallback:
    - https://cloudflare-dns.com/dns-query
    - https://dns.google/dns-query
    - https://1.1.1.1/dns-query
    - tls://8.8.8.8:853
    - tls://dns.rubyfish.cn:853
    - https://1.1.1.1/dns-query
  fallback-filter:
    geoip: true
    ipcidr:
      - 0.0.0.0/8
      - 10.0.0.0/8
      - 100.64.0.0/10
      - 127.0.0.0/8
      - 169.254.0.0/16
      - 172.16.0.0/12
      - 192.0.0.0/24
      - 192.0.2.0/24
      - 192.88.99.0/24
      - 192.168.0.0/16
      - 198.18.0.0/15
      - 198.51.100.0/24
      - 203.0.113.0/24
      - 224.0.0.0/4
      - 240.0.0.0/4
      - 255.255.255.255/32
    domain:
      - +.google.com
      - +.google.co.id
      - +.yahoo.com
      - +.yahoo.co.id
      - +.bing.com
      - +.yandex.com
      - +.apple.com
      - +.konami.com
      - +.garena.com
      - +.garena.co.id
      - +.garena.sg
      - +.dota2.com
      - +.mobilelegends.com
      - +.pubgmobile.com
      - +.krafton.com
      - +.roblox.com
      - +.facebook.com
      - +.fbcdn.net
      - +.instagram.com
      - +.tiktok.com
      - +.tiktokv.com
      - +.tiktokcdn.com
      - +.musical.ly
      - +.twitter.com
      - +.twimg.com
      - +.whatsapp.com
      - +.whatsapp.net
      - +.youtube.com
      - +.ytimg.com
      - +.googlevideo.com
      - +.netflix.com
      - +.hbo.go
      - +.hotstar.com
      - +.disney.com
      - +.speedtest.net
      - +.cbn.id
      - +.fast.com
      - +.xl.co.id
      - +.telkomsel.co.id
      - +.indosat.co.id
      - +.indosat.com
      - +.axis.net
      - +.githubusercontent.com
  fake-ip-filter:
    - "*.lan"
    - time.windows.com
    - time.nist.gov
    - time.apple.com
    - time.asia.apple.com
    - "*.ntp.org.cn"
    - "*.openwrt.pool.ntp.org"
    - time1.cloud.tencent.com
    - time.ustc.edu.cn
    - pool.ntp.org
    - ntp.ubuntu.com
    - ntp.aliyun.com
    - ntp1.aliyun.com
    - ntp2.aliyun.com
    - ntp3.aliyun.com
    - ntp4.aliyun.com
    - ntp5.aliyun.com
    - ntp6.aliyun.com
    - ntp7.aliyun.com
    - time1.aliyun.com
    - time2.aliyun.com
    - time3.aliyun.com
    - time4.aliyun.com
    - time5.aliyun.com
    - time6.aliyun.com
    - time7.aliyun.com
    - "*.time.edu.cn"
    - time1.apple.com
    - time2.apple.com
    - time3.apple.com
    - time4.apple.com
    - time5.apple.com
    - time6.apple.com
    - time7.apple.com
    - time1.google.com
    - time2.google.com
    - time3.google.com
    - time4.google.com
    - music.163.com
    - "*.music.163.com"
    - "*.126.net"
    - musicapi.taihe.com
    - music.taihe.com
    - songsearch.kugou.com
    - trackercdn.kugou.com
    - "*.kuwo.cn"
    - api-jooxtt.sanook.com
    - api.joox.com
    - joox.com
    - y.qq.com
    - "*.y.qq.com"
    - streamoc.music.tc.qq.com
    - mobileoc.music.tc.qq.com
    - isure.stream.qqmusic.qq.com
    - dl.stream.qqmusic.qq.com
    - aqqmusic.tc.qq.com
    - amobile.music.tc.qq.com
    - "*.xiami.com"
    - "*.music.migu.cn"
    - music.migu.cn
    - "*.msftconnecttest.com"
    - "*.msftncsi.com"
    - localhost.ptlogin2.qq.com
    - +.srv.nintendo.net
    - +.stun.playstation.net
    - xbox.*.microsoft.com
    - +.xboxlive.com
    - proxy.golang.org
    - stun.*.*
    - stun.*.*.*
    - heartbeat.belkin.com
    - "*.linksys.com"
    - "*.linksyssmartwifi.com"
    - +.battlenet.com.cn
    - +.media.dssott.com
    - "*.mcdn.bilivideo.cn"
    - ff.dorado.sdo.com
    - "*.ff14.sdo.com"
    - "*.ffxiv.com"
    - "*.finalfantasyxiv.com"
    - "*.square-enix.com"
    - +.nflxvideo.net
    - stun.l.google.com
    - lens.l.google.com
    - swdist.apple.com
    - swcdn.apple.com
    - swdownload.apple.com
    - swquery.apple.com
    - swscan.apple.com
    - mesu.apple.com
    - "*.router.asus.com"
    - +.stun.*.*.*.*.*
    - +.stun.*.*.*.*
    - +.stun.*.*.*
    - +.stun.*.*
    - +.wargaming.net
    - +.wowsgame.cn
    - +.wggames.cn
    - +.wotgame.cn
    - xnotify.xboxlive.com
    - "*.*.xboxlive.com"
    - xbox.*.*.microsoft.com
    - "*.n.n.srv.nintendo.net"
    - localhost.sec.qq.com
    - msftncsi.com
    - msftconnecttest.com
    - +.msftncsi.com
    - +.msftconnecttest.com
    - +.pool.ntp.org
    - ntp7.*.com
    - ntp6.*.com
    - ntp5.*.com
    - ntp4.*.com
    - ntp3.*.com
    - ntp2.*.com
    - ntp1.*.com
    - ntp.*.com
    - time7.*.com
    - time6.*.com
    - time5.*.com
    - time4.*.com
    - time3.*.com
    - time2.*.com
    - time1.*.com
    - time.*.apple.com
    - time.*.edu.cn
    - time.*.gov
    - time.*.com
    - "*.home.arpa"
    - "*.local"
    - "*.test"
    - "*.localhost"
    - "*.invalid"
    - "*.example"
    - "*.localdomain"
  fake-ip-range: 198.18.0.1/16
proxies:
  - name: ssr1
    type: vmess
    server: vmess-ovh-fr01.globalssh.xyz
    port: 80
    uuid: def29317-c086-4292-9e8f-23da8bf8a5c4
    alterId: 0
    cipher: auto
    udp: true
    network: http
    http-opts:
      method: "GET"
      path:
        - '/vmess-tcp'
        - '/video'
      headers:
        Connection:
          - keep-alive
proxy-groups:
  - name: gameTLS
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    tolerance: 50
    proxies:
      - ssr1
rules:
 # - DST-PORT,9030,gameHTTP
 # - DST-PORT,9031,gameHTTP
 # - DST-PORT,20000,gameHTTP
 # - DST-PORT,20001,gameHTTP
 # - DST-PORT,20002,gameHTTP
  - DOMAIN,www.pubgmobile.com,gameTLS
  - DOMAIN,dl.listdl.com,gameTLS
  - DOMAIN,crl3.digicert.com,gameTLS
  - DOMAIN,www.microvirt.com,gameTLS
  - DOMAIN,android-safebrowsing.google.com,gameTLS
  - DOMAIN,app-measurement.com,gameTLS
  - DOMAIN,lh3.googleusercontent.com,gameTLS
  - DOMAIN,android.crashsight.wetest.net,gameTLS
  - DOMAIN-SUFFIX,gstatic.com,gameTLS
  - DOMAIN-SUFFIX,gcloudcs.com,gameTLS
  - DOMAIN-SUFFIX,sg.tdatamaster.com,gameTLS
  - DOMAIN-SUFFIX,proximabeta.com,gameTLS
  - DOMAIN-SUFFIX,twimg.com,gameTLS
  - DOMAIN-SUFFIX,fbsbx.com,gameTLS
  - DOMAIN,graph.facebook.com,gameTLS
  - DOMAIN-SUFFIX,adjust.com,gameTLS
  - DOMAIN-SUFFIX,amsoveasea.com,gameTLS
  - DOMAIN-SUFFIX,gcloudsdk.com,gameTLS
  - DOMAIN-SUFFIX,gjacky.com,gameTLS
  - DOMAIN-SUFFIX,anticheatexpert.com,gameTLS
  - DOMAIN-SUFFIX,onezapp.com,gameTLS
  - DOMAIN-SUFFIX,qcloud.com,gameTLS
  - DOMAIN-SUFFIX,doubleclick.com,gameTLS
  - DOMAIN-SUFFIX,googleapis.com,gameTLS
  - DOMAIN-SUFFIX,gvt1.com,gameTLS
  - DOMAIN-SUFFIX,igamecj.com,gameTLS
  - DOMAIN-SUFFIX,qq.com,gameTLS
  - DOMAIN-SUFFIX,gcloudcs.com,gameTLS
  - IP-CIDR,203.205.239.243/24,gameTLS
  - IP-CIDR,129.226.2.165/24,gameTLS
  - IP-CIDR,172.16.0.1/24,gameTLS
  - IP-CIDR,137.208.72.137/24,gameTLS
  - IP-CIDR,162.0.0.0/8,gameTLS
  - IP-CIDR,49.0.0.0/8,gameTLS
  - IP-CIDR,20.0.0.0/8,gameTLS
  - GEOIP,CN,gameTLS
  - MATCH,DIRECT
tun:
  enable: true
  stack: system
  dns-hijack:
    - tcp://8.8.8.8:53
    - tcp://8.8.4.4:53
profile:
  store-selected: true
  store-fake-ip: true
experimental:
  interface-name: en0
secret: "123456"
bind-address: "*"
