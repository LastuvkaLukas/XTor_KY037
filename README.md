<img src="img/logo.png" align="right" />

# KY-037 Microphone sensor module (high sensitivity)

## Picture
![image](https://user-images.githubusercontent.com/84145589/118643946-7d227e00-b7dd-11eb-90e2-e8a76b26ad58.png)

## platformio.ini – project configuration file
```ini
[env:myenv]
platform = atmelavr
framework = arduino

lib_deps =

     # RECOMMENDED
     # Accept new functionality in a backwards compatible manner and patches
     xtor/XTor_KY037 @ ^1.0.1

     # Accept only backwards compatible bug fixes
     # (any version with the same major and minor versions, and an equal or greater patch version)
     xtor/XTor_KY037 @ ~1.0.1

     # The exact version
     xtor/XTor_KY037 @ 1.0.1
```

## Example
https://github.com/LastuvkaLukas/XTor_KY037/tree/master/example
