  
const { app, BrowserWindow, nativeTheme } = require('electron');
const path = require('path');

if (require('electron-squirrel-startup')) {
  app.quit();
}

const createWindow = () => {
  const mainWindow = new BrowserWindow({
    width: 1000,
    height: 700, minWidth: 800,
    minHeight: 600,
    webPreferences: {
      nodeIntegration: true, contextIsolation: false,
      enableRemoteModule: true,
    },
    icon: "./icon.ico",
    darkTheme: true
  });
  mainWindow.removeMenu();
  nativeTheme.themeSource = 'dark'
  //mainWindow.webContents.openDevTools();

  mainWindow.loadFile(path.join(__dirname, 'main_menu.html'));
};

app.on('ready', createWindow);

app.on('window-all-closed', () => {
  if (process.platform !== 'darwin') {
    app.quit();
  }
});

app.on('activate', () => {
  if (BrowserWindow.getAllWindows().length === 0) {
    createWindow();
  }
});
