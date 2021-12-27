# Sample application to check template instantiations


## How to build

The build supports the following parameters:
* Implicit instantiation

```
cmake -DUSE_EXTERN=0 ..
```

* Explicit instantiation definition
```
cmake -DUSE_EXTERN=1 ..
```

* Explicit instantiation declaration + Explicit instantiation definition
```
cmake -DUSE_EXTERN=2 ..
```

## How to see reports

After a successfull build, the file `nm.<build-type>.txt` is generated in the build directory.
