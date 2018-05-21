let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div> 
      <h1> (ReasonReact.string("Hi From Hse DevTeam")) </h1>
    </div>
};