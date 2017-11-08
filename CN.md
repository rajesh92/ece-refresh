Computer Networks
-----------------

Basics:
* What is the difference between TCP and UDP?
* What is the difference between TCP and IP?
* Difference between Circuit Switching and Packet Switching:
* [DNS](http://computer.howstuffworks.com/dns.htm/printable): consists of Resolving name server, Root name servers, TLD name servers, Authoritative name servers
* ARP:
* DHCP:
* What is NAT?
* What is VPN? How does it work?
* How does a browser handle URL request?
* What is Head of Line Blocking? [Wiki](https://en.wikipedia.org/wiki/Head-of-line_blocking)
At most 6 simultaneous connections can be open and only one request can be served before initiating the next request.
HTTP/2 fixes head of line blocking by multiplexing.
Also uses header compression which reduces the amount of data sent to server. HTTP/2 has 1 connection instead of 6. Dedicated connections used in HTTP/1 are replaced by stream, all streams share the single connection. The streams are split up into Frames, multiplexed into the connection.
HTTP/2 has a proprietery compression algorithm and uses reference to previously used headers (efficient use of bandwidth)

* Man-in-the-middle-attack [Wiki](https://en.wikipedia.org/wiki/Man-in-the-middle_attack)
* Difference between Flow Control and Congestion Control in TCP?


| Flow Control   | Congestion Control |
| :------------- | :------------- |
| Makes sure sender does not overload the receiver       | Makes sure that the network is able to handle the packet       |
| Local Phenomenon       | Global Phenomenon       |
| Initiated by sender       | Initiated by router       |
[Link](http://stackoverflow.com/questions/16473038/whats-the-difference-between-flow-control-and-congestion-control-in-tcp)


Advanced:
* What is Software Defined Networking?
* What are Content Delievry Networks (CDN)?
* What is OpenFlow?

Optional:
* What is a proxy?
  [Proxy](https://en.wikipedia.org/wiki/Proxy_server) is a legitimate man-in-the-middle with many benefits like saving bandwidth by adding additional compression, downsampling images and aggressive caching
* HTTPS = HTTP + [TLS](https://en.wikipedia.org/wiki/Transport_Layer_Security)
TLS encrypts communication in a way that can't be read by anyone other else other than the intended recipients. Impossible to break a TLS encryption. TLS uses [chain of trust](https://en.wikipedia.org/wiki/Chain_of_trust)
TLS = encryption + hashing

* [Public key encryption] (https://en.wikipedia.org/wiki/Public-key_cryptography) or Asymmetric encryption
