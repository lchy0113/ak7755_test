# Build Guide.
-----
- Set the Android SDK environment variable.
- Move to the location of the package want to build.
```
$> mmm -j16 external/ak7755_test ; adb push out/target/product/tcc898x/system/bin/ak7755_test /data/local/tmp/ ;
```


# Update Code.
-----
21/07/06
> Update cx2070x demo application for NHN1051 project
> cx2070x user-level IOCTL interface support demo application
> jira : http://its.kdiwin.com:8080/browse/HNNHN1051-150

20/10/12
> Update Register value to NHN1033.
> Separation of Normal mode register values into Driver level and app level.
22/09/06 
> initial
