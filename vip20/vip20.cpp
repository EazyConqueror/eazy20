proxies:
  - name: "ws"
    type: vmess
    server: fr1.v2rayserv.com
    port: 80
    uuid: b431bac8-3914-4978-bc9e-eeaec1d6ebf3
    alterId: 0
    cipher: auto
    udp: true
    #tls: true
    #skip-cert-verify: true
    network: ws
    ws-opts:
      path: /sshocean
      headers:
        Host: fr1.v2rayserv.com
  - name: ss
    type: ss
    server: 35.152.59.94
    port: 30867
    cipher: chacha20-ietf-poly1305
    password: lVWuFZDDyjHi
    udp: true

  - name: ssr
    type: ssr
    server: 35.152.59.94
    port: 1443
    udp: true
    cipher: aes-256-cfb
    password: vip
    obfs: tls1.2_ticket_auth
    protocol: auth_sha1_v4
    obfs-param: domain.tld
    protocol-param: "2"
proxy-groups:
  - name: gameTLS
    type: url-test
    proxies:
      - ssr
    tolerance: 150
    lazy: true
    url: 'http://www.gstatic.com/generate_204'
    interval: 300
rules:
  - DST-PORT,9030,ss
  - DST-PORT,9031,ss
  - DST-PORT,20000,ss
  - DST-PORT,20001,ss
  - DST-PORT,20002,ss
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
  - DOMAIN-SUFFIX,gjacky.com,DIRECT
  - DOMAIN-SUFFIX,anticheatexpert.com,gameTLS
  - DOMAIN-SUFFIX,onezapp.com,gameTLS
  - DOMAIN-SUFFIX,qcloud.com,gameTLS
  - DOMAIN-SUFFIX,doubleclick.com,gameTLS
  - DOMAIN-SUFFIX,googleapis.com,gameTLS
  - DOMAIN-SUFFIX,gvt1.com,gameTLS
  - DOMAIN-SUFFIX,igamecj.com,gameTLS
  - DOMAIN-SUFFIX,qq.com,gameTLS
  - DOMAIN-SUFFIX,www.meter.net,gameTLS
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
