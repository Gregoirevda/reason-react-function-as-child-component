let component = ReasonReact.statelessComponent "App";

let make _children => {
  ...component,
  render: fun _self =>
    <div>
      <Library>
          (fun arg => <div> (ReasonReact.stringToElement ("hey " ^ arg)) </div>)
      </Library>
      <MyCustomLibrary>
          (fun arg => <div> (ReasonReact.stringToElement ("hey " ^ arg)) </div>)
      </MyCustomLibrary>
    </div>
};
