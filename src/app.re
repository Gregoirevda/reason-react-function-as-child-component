let component = ReasonReact.statelessComponent "App";

let make _children => {
  ...component,
  render: fun _self =>
    <Component>
        (fun arg => <div> (ReasonReact.stringToElement ("hey " ^ arg)) </div>)
    </Component>
};
