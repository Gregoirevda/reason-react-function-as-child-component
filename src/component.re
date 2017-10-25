let component = ReasonReact.statelessComponent "Component";

let make children => {
  ...component,
  render: fun _self => {
    /* Add any logic in here */
    let arg = "arg";
    children.(0) arg;
  }
 };
