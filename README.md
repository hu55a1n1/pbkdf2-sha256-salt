# pbkdf2-sha256-salt
Thread safe PBKDF2 with random, unique salts and constant-time comparison. 
Based on [JP Mens' C implementation](https://github.com/jpmens/mosquitto-auth-plug/blob/master/pbkdf2-check.c) which is itself inspired by [Simon Sapin's scheme](https://exyr.org/2011/hashing-passwords/).

## Credits
My contributions to this project are limited to identifying a [bug concerning thread-safety](https://github.com/jpmens/mosquitto-auth-plug/issues/134) in JP Mens' code and providing a header & sample with openssl locking for thread safe usage; so all credit to JP Mens, Simon Sapin & Kungliga Tekniska Hgskolan (author of `base64.c/h`).
