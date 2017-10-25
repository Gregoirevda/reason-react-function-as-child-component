#### Function as Child Component example in Reason React

#### Reusable component
```
<Library>
  (fun arg => <div> (ReasonReact.stringToElement ("hey " ^ arg)) </div>)
</Library>
```

#### Customize Library

myCustomLibrary.re
```
let make = Library.create config::"foo";
```

you can then use the Library with it's default config:
```
<MyCustomLibrary>
    (fun arg => <div> (ReasonReact.stringToElement ("hey " ^ arg)) </div>)
</MyCustomLibrary>
```
