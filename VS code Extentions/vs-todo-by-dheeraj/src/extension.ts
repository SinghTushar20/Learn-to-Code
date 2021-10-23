import * as vscode from "vscode";
import { HelloWorldPanel } from "./helloWorldPanel";
import { SidebarProvider } from "./SidebarProvider";

export function activate(context: vscode.ExtensionContext) {
  const sidebarProvider = new SidebarProvider(context.extensionUri);
  context.subscriptions.push(
    vscode.window.registerWebviewViewProvider("vstodo-sidebar", sidebarProvider)
  );

  context.subscriptions.push(
    vscode.commands.registerCommand("vs-todo-by-dheeraj.helloWorld", () => {
      HelloWorldPanel.createOrShow(context.extensionUri);
    })
  );

  context.subscriptions.push(
    vscode.commands.registerCommand("vs-todo-by-dheeraj.refresh", async () => {
      // HelloWorldPanel.kill();
      // HelloWorldPanel.createOrShow(context.extensionUri);
      await vscode.commands.executeCommand("workbench.action.closeSidebar");
      await vscode.commands.executeCommand(
        "workbench.view.extension.vstodo-sidebar-view"
      );
      // setTimeout(() => {
      //   vscode.commands.executeCommand(
      //     "workbench.action.webview.openDeveloperTools"
      //   );
      // }, 500);
    })
  );

  context.subscriptions.push(
    vscode.commands.registerCommand(
      "vs-todo-by-dheeraj.helloWorld2",
      async () => {
        const reply = await vscode.window.showInformationMessage(
          "New Hello world from us",
          "Hallo",
          "Konnichiwa"
        );
        reply !== undefined
          ? reply === "Konnichiwa"
            ? vscode.window.showInformationMessage("Japanese huh...")
            : vscode.window.showInformationMessage(
                "Wow German... I am trying to learn it as well... Mind helping me.. ;p"
              )
          : vscode.window.showInformationMessage("Stop ignoring us ;p");
      }
    )
  );
}

export function deactivate() {}
