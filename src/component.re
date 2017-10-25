let component = ReasonReact.statelessComponent "Component";

let make children => {
  ...component,
  render: fun _self => {
     ReasonReact.createDomElement props::(Js.Obj.empty ()) "div" ([|children.(0) "arg"|])
  }

 };
