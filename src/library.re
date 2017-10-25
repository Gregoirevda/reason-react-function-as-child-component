let component = ReasonReact.statelessComponent "Component";

let create ::config => {
  let customMake children => {
    ...component,
    render: fun _self => {
      children.(0) config;
    }
  };
  customMake;
};

let make children => {
  ...component,
  render: fun _self => {
    children.(0) "bar";
  }
 };
